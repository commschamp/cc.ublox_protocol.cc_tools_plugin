// Generated by commsdsl2tools_qt v6.3.2

#include "AidAlm.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AidAlm.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_svid(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_week(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Week;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct DwrdMembers
{
    struct ListMembers
    {
        static QVariantMap createProps_element(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::AidAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DwrdMembers::ListMembers::Element;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }
    }; // struct ListMembers

    static QVariantMap createProps_list(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::AidAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DwrdMembers::List;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .serialisedHidden()
                .add(ListMembers::createProps_element(serHidden))
                .appendIndexToElementName()
                .asMap();
    }
}; // struct DwrdMembers

static QVariantMap createProps_dwrd(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlmFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Dwrd;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .uncheckable()
            .field(DwrdMembers::createProps_list(serHidden))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_svid(false));
    props.append(createProps_week(false));
    props.append(createProps_dwrd(false));
    return props;
}

} // namespace

class AidAlmImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AidAlm<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AidAlmImpl
    >
{
public:
    AidAlmImpl() = default;
    AidAlmImpl(const AidAlmImpl&) = delete;
    AidAlmImpl(AidAlmImpl&&) = delete;
    virtual ~AidAlmImpl() = default;
    AidAlmImpl& operator=(const AidAlmImpl&) = default;
    AidAlmImpl& operator=(AidAlmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlm::AidAlm() : m_pImpl(new AidAlmImpl) {}
AidAlm::~AidAlm() = default;

AidAlm& AidAlm::operator=(const AidAlm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlm& AidAlm::operator=(AidAlm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AidAlm::MsgIdParamType AidAlm::doGetId()
{
    return ::cc_ublox::message::AidAlm<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AidAlm::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlm::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlm::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlm::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlm::MsgIdParamType AidAlm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlm::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
