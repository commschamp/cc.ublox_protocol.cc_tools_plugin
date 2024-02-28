// Generated by commsdsl2tools_qt v6.3.0

#include "CfgValdel.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgValKeyId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgValdel.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgValdelFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_layers(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgValdelFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Layers;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(1U, "bbr")
            .add(2U, "flash")
            .asMap();
}

struct TransactionMembers
{
    static QVariantMap createProps_action(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgValdelFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TransactionMembers::Action;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add("Transactionless", 0)
                .add("Start", 1)
                .add("Ongoing", 2)
                .add("End", 3)
                .asMap();
    }

    static QVariantMap createProps_reserved(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgValdelFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TransactionMembers::Reserved;
        auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
        return props;
    }
}; // struct TransactionMembers

static QVariantMap createProps_transaction(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgValdelFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Transaction;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add(TransactionMembers::createProps_action(true))
            .add(TransactionMembers::createProps_reserved(true))
            .asMap();
}

static QVariantMap createProps_reserved0(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgValdelFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved0;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

struct KeysMembers
{
    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgValdelFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::KeysMembers::Element;
        auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgValKeyId(Field::name(), serHidden);
        return props;
    }
}; // struct KeysMembers

static QVariantMap createProps_keys(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgValdelFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Keys;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(KeysMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_layers(false));
    props.append(createProps_transaction(false));
    props.append(createProps_reserved0(false));
    props.append(createProps_keys(false));
    return props;
}

} // namespace

class CfgValdelImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgValdel<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgValdelImpl
    >
{
public:
    CfgValdelImpl() = default;
    CfgValdelImpl(const CfgValdelImpl&) = delete;
    CfgValdelImpl(CfgValdelImpl&&) = delete;
    virtual ~CfgValdelImpl() = default;
    CfgValdelImpl& operator=(const CfgValdelImpl&) = default;
    CfgValdelImpl& operator=(CfgValdelImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgValdel::CfgValdel() : m_pImpl(new CfgValdelImpl) {}
CfgValdel::~CfgValdel() = default;

CfgValdel& CfgValdel::operator=(const CfgValdel& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgValdel& CfgValdel::operator=(CfgValdel&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgValdel::MsgIdParamType CfgValdel::doGetId()
{
    return ::cc_ublox::message::CfgValdel<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgValdel::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgValdel::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgValdel::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgValdel::resetImpl()
{
    m_pImpl->reset();
}

bool CfgValdel::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgValdel*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgValdel::MsgIdParamType CfgValdel::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgValdel::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgValdel::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgValdel::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgValdel::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgValdel::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin