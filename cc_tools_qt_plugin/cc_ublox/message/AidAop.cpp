// Generated by commsdsl2tools_qt v6.3.4

#include "AidAop.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AidAop.h"

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
    using Field = ::cc_ublox::message::AidAopFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Svid;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_data(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAopFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Data;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

struct OptionalsMembers
{
    struct OptionalsWrapMembers
    {
        static QVariantMap createProps_optional0(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::AidAopFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OptionalsMembers::OptionalsWrapMembers::Optional0;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_optional1(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::AidAopFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OptionalsMembers::OptionalsWrapMembers::Optional1;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }

        static QVariantMap createProps_optional2(bool serHidden)
        {
            static_cast<void>(serHidden);
            using Field = ::cc_ublox::message::AidAopFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OptionalsMembers::OptionalsWrapMembers::Optional2;
            return
                cc_tools_qt::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden(serHidden)
                    .asMap();
        }
    }; // struct OptionalsWrapMembers

    static QVariantMap createProps_optionalsWrap(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::AidAopFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::OptionalsMembers::OptionalsWrap;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .add(OptionalsWrapMembers::createProps_optional0(serHidden))
                .add(OptionalsWrapMembers::createProps_optional1(serHidden))
                .add(OptionalsWrapMembers::createProps_optional2(serHidden))
                .serialisedHidden()
                .asMap();
    }
}; // struct OptionalsMembers

static QVariantMap createProps_optionals(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAopFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Optionals;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .field(OptionalsMembers::createProps_optionalsWrap(serHidden))
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_svid(false));
    props.append(createProps_data(false));
    props.append(createProps_optionals(false));
    return props;
}

} // namespace

class AidAopImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AidAop<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AidAopImpl
    >
{
public:
    AidAopImpl() = default;
    AidAopImpl(const AidAopImpl&) = delete;
    AidAopImpl(AidAopImpl&&) = delete;
    virtual ~AidAopImpl() = default;
    AidAopImpl& operator=(const AidAopImpl&) = default;
    AidAopImpl& operator=(AidAopImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAop::AidAop() : m_pImpl(new AidAopImpl) {}
AidAop::~AidAop() = default;

AidAop& AidAop::operator=(const AidAop& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAop& AidAop::operator=(AidAop&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AidAop::MsgIdParamType AidAop::doGetId()
{
    return ::cc_ublox::message::AidAop<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AidAop::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAop::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAop::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAop::resetImpl()
{
    m_pImpl->reset();
}

bool AidAop::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAop*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAop::MsgIdParamType AidAop::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAop::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAop::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAop::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAop::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAop::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
