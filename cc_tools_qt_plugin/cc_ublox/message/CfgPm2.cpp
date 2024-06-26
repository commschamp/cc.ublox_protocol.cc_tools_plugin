// Generated by commsdsl2tools_qt v6.3.3

#include "CfgPm2.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgPm2Flags.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res1.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res4.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgPm2.h"

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
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_maxStartupStateDur(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MaxStartupStateDur;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved2(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved2;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res1(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgPm2Flags(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_updatePeriod(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::UpdatePeriod;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_searchPeriod(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SearchPeriod;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_gridOffset(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GridOffset;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_onTime(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OnTime;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_minAcqTime(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MinAcqTime;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct Reserved3Members
{
    static QVariantMap createProps_reserved3(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3Members::Reserved3;
        auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res4(Field::name(), serHidden);
        return props;
    }
}; // struct Reserved3Members

static QVariantMap createProps_reserved3(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgPm2Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved3;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(Reserved3Members::createProps_reserved3(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_maxStartupStateDur(false));
    props.append(createProps_reserved2(false));
    props.append(createProps_flags(false));
    props.append(createProps_updatePeriod(false));
    props.append(createProps_searchPeriod(false));
    props.append(createProps_gridOffset(false));
    props.append(createProps_onTime(false));
    props.append(createProps_minAcqTime(false));
    props.append(createProps_reserved3(false));
    return props;
}

} // namespace

class CfgPm2Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgPm2<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgPm2Impl
    >
{
public:
    CfgPm2Impl() = default;
    CfgPm2Impl(const CfgPm2Impl&) = delete;
    CfgPm2Impl(CfgPm2Impl&&) = delete;
    virtual ~CfgPm2Impl() = default;
    CfgPm2Impl& operator=(const CfgPm2Impl&) = default;
    CfgPm2Impl& operator=(CfgPm2Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPm2::CfgPm2() : m_pImpl(new CfgPm2Impl) {}
CfgPm2::~CfgPm2() = default;

CfgPm2& CfgPm2::operator=(const CfgPm2& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPm2& CfgPm2::operator=(CfgPm2&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgPm2::MsgIdParamType CfgPm2::doGetId()
{
    return ::cc_ublox::message::CfgPm2<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgPm2::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPm2::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPm2::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPm2::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPm2::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPm2*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPm2::MsgIdParamType CfgPm2::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPm2::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPm2::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPm2::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPm2::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPm2::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
